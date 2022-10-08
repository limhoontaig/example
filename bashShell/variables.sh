#!/bin/bash
VAR="Global Variable"
function bash {
    local VAR="Local Variable"
    echo "Inside function '$'VAR: $VAR"
}
echo "Global Variable '$'VAR: $VAR"
echo "Call the function bash"
bash
echo "Global Variable: $VAR"
