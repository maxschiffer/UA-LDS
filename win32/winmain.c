/* Copyright (c) 1996-2022, OPC Foundation. All rights reserved.

The source code in this file is covered under a dual-license scenario:
- RCL: for OPC Foundation members in good-standing
- GPL V2: everybody else

RCL license terms accompanied with this source code. See http://opcfoundation.org/License/RCL/1.00/

GNU General Public License as published by the Free Software Foundation;
version 2 of the License are accompanied with this source code. See http://opcfoundation.org/License/GPLv2

This source code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*/

#include <windows.h>
#include "../config.h"
#include "platform.h"

extern int main(int argc, char* argv[]);

/* On Windows we need this special main entry function when compiling
 * with subsystem:windows.
 * This function is only a wrapper and will call the standard C main().
 */
int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    UALDS_UNUSED(hInstance);
    UALDS_UNUSED(hPrevInstance);
    UALDS_UNUSED(lpCmdLine);
    UALDS_UNUSED(nCmdShow);
    /* Call standard C main() function.
     * Luckily MS as defined the original parameters as undocumented feature:
     * __argc and __argv
     */
    return main(__argc, __argv);
}


