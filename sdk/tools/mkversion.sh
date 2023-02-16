#!/usr/bin/env bash
############################################################################
# tools/mkversion.sh
#
#   Copyright 2018 Sony Semiconductor Solutions Corporation
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in
#    the documentation and/or other materials provided with the
#    distribution.
# 3. Neither the name of Sony Semiconductor Solutions Corporation nor
#    the names of its contributors may be used to endorse or promote
#    products derived from this software without specific prior written
#    permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
# COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
# OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
# AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
############################################################################

TAG=${1:-HEAD}

SDK_VERSION="SDK3.0.0"
if [ -r sdk_version ]; then
    SDK_VERSION="SDK`cat sdk_version`"
fi

NUTTX_VERSION="11.0.0"

# Get short hash for specified tag
GIT_REVISION=`git rev-parse ${TAG} 2>/dev/null | cut -b -7`

if [ "${GIT_REVISION}" != "" ]; then
    BUILD_ID="${SDK_VERSION}-${GIT_REVISION}"
    if [ -n "`git diff-index --name-only --ignore-submodules=untracked ${TAG} | head -1`" ]; then
        BUILD_ID="${BUILD_ID}"-dirty
    fi
else
    BUILD_ID="${SDK_VERSION}"
fi

VERSION_ARG="-v ${NUTTX_VERSION} -b ${BUILD_ID}"
echo ${VERSION_ARG}
