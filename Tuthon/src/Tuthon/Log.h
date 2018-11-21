#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Tuthon {
	class TUTHON_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;


	};
}

#define TN_CORE_ERROR(...) ::Tuthon::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TN_CORE_WARN(...) ::Tuthon::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TN_CORE_INFO(...) ::Tuthon::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TN_CORE_TRACE(...) ::Tuthon::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TN_CORE_FATAL(...) ::Tuthon::Log::GetCoreLogger()->critical(__VA_ARGS__)

#define TN_ERROR(...) ::Tuthon::Log::GetClientLogger()->error(__VA_ARGS__)
#define TN_WARN(...)  ::Tuthon::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TN_INFO(...)  ::Tuthon::Log::GetClientLogger()->info(__VA_ARGS__)
#define TN_TRACE(...) ::Tuthon::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TN_FATAL(...) ::Tuthon::Log::GetClientLogger()->critical(__VA_ARGS__)

