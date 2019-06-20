//
// Created by developer on 6/16/19.
//

#ifndef SIMPLE_LOG_H
#define SIMPLE_LOG_H


#include <memory>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>


namespace GES {
	class Log {
	public:
		static void init();
		inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// core log macros
#define GES_CORE_TRACE(...) ::GES::Log::getCoreLogger()->trace(__VA_ARGS__)
#define GES_CORE_INFO(...)  ::GES::Log::getCoreLogger()->info(__VA_ARGS__)
#define GES_CORE_WARN(...)  ::GES::Log::getCoreLogger()->warn(__VA_ARGS__)
#define GES_CORE_ERROR(...) ::GES::Log::getCoreLogger()->error(__VA_ARGS__)
#define GES_CORE_FATAL(...) ::GES::Log::getCoreLogger()->fatal(__VA_ARGS__)

// client log macros
#define GES_TRACE(...) ::GES::Log::getClientLogger()->trace(__VA_ARGS__)
#define GES_INFO(...)  ::GES::Log::getClientLogger()->info(__VA_ARGS__)
#define GES_WARN(...)  ::GES::Log::getClientLogger()->warn(__VA_ARGS__)
#define GES_ERROR(...) ::GES::Log::getClientLogger()->error(__VA_ARGS__)
#define GES_FATAL(...) ::GES::Log::getClientLogger()->fatal(__VA_ARGS__)

#endif //SIMPLE_LOG_H
