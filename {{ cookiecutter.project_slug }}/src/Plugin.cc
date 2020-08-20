// Generated by binpac_quickstart

#include "plugin/Plugin.h"

#include "{{ cookiecutter.protocol_name }}.h"

namespace plugin { namespace {{ cookiecutter.project_namespace }}::{{ cookiecutter.protocol_name }} { Plugin plugin; } }

using namespace plugin::{{ cookiecutter.project_namespace }}::{{ cookiecutter.protocol_name }};

plugin::Configuration Plugin::Configure()
		{
		AddComponent(new ::analyzer::Component("{{ cookiecutter.protocol_name }}",
                         ::analyzer::{{ cookiecutter.project_namespace }}_{{ cookiecutter.protocol_name }}_Analyzer::InstantiateAnalyzer));

		plugin::Configuration config;
		config.name = "{{ cookiecutter.project_namespace }}::{{ cookiecutter.protocol_name }}";
		config.description = "{{ cookiecutter.project_name }}";
		config.version.major = 0;
		config.version.minor = 1;
		config.version.patch = 0;
		return config;
		}

