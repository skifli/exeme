// Part of the Exeme Language Project, under the MIT license. See '/LICENSE' for
// license information. SPDX-License-Identifier: MIT License.

#pragma once

#include "../includes.c"
#include "./console.c"

noreturn void panic(const char *PANIC_MSG) {
	printf("%s%spanic: %s%s\n", F_BRIGHT_RED, S_BOLD, S_RESET, PANIC_MSG);
	exit(EXIT_FAILURE);
}
