#!/usr/bin/bash

echo "::group::$(git ls-files --full-name Makefile)"
make run
echo "::endgroup::"
