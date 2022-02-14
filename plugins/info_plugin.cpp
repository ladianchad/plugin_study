#include <plugin_study/info_plugin.hpp>
#include <ros/ros.h>
#include <pluginlib/class_list_macros.h>

PLUGINLIB_EXPORT_CLASS(study_plugin::InfoPlugin, study_plugin::BaseStudyPlugin);

namespace study_plugin
{
  InfoPlugin::InfoPlugin() : BaseStudyPlugin("info plugin"){};

  void InfoPlugin::action()
  {
    ROS_INFO("action : logging info plugin");
  }
} // namespace study_plugin
