#!/bin/sh

cd /home/mingming/project/world/components/yocto/workspace/sources/linux-xlnx
git diff > ../../../../../project-spec/meta-user/recipes-kernel/linux/linux-xlnx/test.patch
cd /home/mingming/project/world
petalinux-build 
