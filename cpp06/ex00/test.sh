#!/bin/bash

# Name of your executable
EXEC="./convert"

# Colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
CYAN='\033[0;36m'
NC='\033[0m' # No Color

# Check if executable exists, if not, try to make
if [ ! -f "$EXEC" ]; then
    echo -e "${CYAN}Executable not found. Running make...${NC}"
    make re
    if [ ! -f "$EXEC" ]; then
        echo -e "${RED}Compilation failed.${NC}"
        exit 1
    fi
fi

run_test() {
    local input="$1"
    echo -e "${CYAN}----------------------------------------${NC}"
    echo -e "Testing input: ${GREEN}'$input'${NC}"
    $EXEC "$input"
    local status=$?
    
    if [ $status -ne 0 ]; then
        echo -e "${RED}[CRASH/ERROR] Program exited with status $status${NC}"
    fi
}

echo -e "${GREEN}=== CPP06 EX00 TESTER ===${NC}"

# 1. Standard Characters
run_test "a"
run_test "*"

# 2. Integers (Normal & Limits)
run_test "0"
run_test "42"
run_test "-42"
run_test "2147483647"  # INT_MAX
run_test "-2147483648" # INT_MIN

# 3. Floats and Doubles
run_test "42.0f"
run_test "42.42"
run_test "-42.42f"

# 4. The Required Special Literals (Pseudo-literals)
run_test "nan"
run_test "nanf"
run_test "+inf"
run_test "+inff"
run_test "-inf"
run_test "-inff"

# 5. Tricky/Invalid Inputs
echo -e "${CYAN}--- EDGE CASES & ERRORS ---${NC}"
run_test ""             # Empty string
run_test "   "          # Just spaces
run_test "42abc"        # Mixed content (Should likely be 'impossible' or error)
run_test "abc42"        # Garbage
run_test "2147483648"   # Int overflow (fits in double, but char/int should display impossible)

echo -e "${GREEN}=== TEST FINISHED ===${NC}"