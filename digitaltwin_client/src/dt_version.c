// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include "digitaltwin_client_version.h"

/** @brief Pre-processor friendly representation of Digital Twin Client version. */
#define DIGITALTWIN_CLIENT_SDK_VERSION "0.9.0"

const char* DigitalTwin_Client_GetVersionString(void)
{
    return DIGITALTWIN_CLIENT_SDK_VERSION;
}
