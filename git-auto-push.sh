#!/bin/bash

# Go to repo root
cd "$(dirname "$0")"

# Add all changes (but respects .gitignore)
git add .

# Commit with current date/time
git commit -m "Auto update on $(date +"%Y-%m-%d %H:%M:%S")"

# Push to origin main branch
git push origin main
