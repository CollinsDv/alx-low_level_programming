#!/bin/bash
find . -name ".o" -exec ar -rcs liball.a {} +
