#!/bin/bash

# Set possible Isaac Sim paths
ISAAC_SIM_PATHS=("$HOME/isaacsim" "/isaac-sim")

# Get absolute path of the current script directory
CUR_SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Prepend the script directory to all arguments
NEW_ARGS=""
for arg in "$@"; do
    NEW_ARGS="${NEW_ARGS} ${CUR_SCRIPT_DIR}/${arg}"
done

# Look for a valid Isaac Sim installation
for ISAAC_SIM_PATH in "${ISAAC_SIM_PATHS[@]}"; do
    if [[ -f "$ISAAC_SIM_PATH/python.sh" ]]; then
        "$ISAAC_SIM_PATH/python.sh" $NEW_ARGS
        exit 0
    fi
done

echo "No valid Isaac Sim installation found under home or root directory."
exit 1
