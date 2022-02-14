#ifndef INFO_STUDY_PLUGIN__
#define INFO_STUDY_PLUGIN__

#include <plugin_study/base_study_plugin.hpp>

namespace study_plugin
{
  class InfoPlugin : public BaseStudyPlugin
  {
  public:
    InfoPlugin();
    virtual void action() override;
  };
} // namespace study_plugin

#endif