#ifndef PRINT_H
#define PRINT_H

#include "Logging/Log.h"

namespace CJ {
	/**
	 * Generic println
	 */
	template <typename T>
	static void println(T value) {
		std::cout << "[CJ-IO]: " << value << std::endl;
	}

	/**
	 * Generic print
	 */
	template <typename T>
	static void print(T value) {
		std::cout << "[CJ-IO]: " << value;
	}
}


#ifndef DISABLE_LOGGER
	#define CJ_CORE_PRINT(...) ::CJ::println(__VA_ARGS__)
	#define CJ_CORE_PRINT_INFO(...) ::CJ::Log::getCoreLogger()->info(__VA_ARGS__)
	#define CJ_CORE_PRINT_ERROR(...) ::CJ::Log::getCoreLogger()->error(__VA_ARGS__)
	#define CJ_CORE_PRINT_WARN(...) ::CJ::Log::getCoreLogger()->warn(__VA_ARGS__)
	#define CJ_CORE_PRINT_TRACE(...) ::CJ::Log::getCoreLogger()->trace(__VA_ARGS__)

	#define CJ_PRINT(...) ::CJ::println(__VA_ARGS__)
	#define CJ_PRINT_INFO(...) ::CJ::Log::getClientLogger()->info(__VA_ARGS__)
	#define CJ_PRINT_ERROR(...) ::CJ::Log::getClientLogger()->error(__VA_ARGS__)
	#define CJ_PRINT_WARN(...) ::CJ::Log::getClientLogger()->warn(__VA_ARGS__)
	#define CJ_PRINT_TRACE(...) ::CJ::Log::getClientLogger()->trace(__VA_ARGS__)
#else
	#define CJ_CORE_PRINT(...)
	#define CJ_CORE_PRINT_INFO(...)
	#define CJ_CORE_PRINT_ERROR(...)
	#define CJ_CORE_PRINT_WARN(...)
	#define CJ_CORE_PRINT_TRACE(...)

	#define CJ_PRINT(...)
	#define CJ_PRINT_INFO(...)
	#define CJ_PRINT_ERROR(...)
	#define CJ_PRINT_WARN(...)
	#define CJ_PRINT_TRACE(...)
#endif // DEBUG_CJ

#endif // PRINT_H