#include <plugin_study/error_plugin.hpp>
#include <ros/ros.h>
#include <pluginlib/class_list_macros.h>

PLUGINLIB_EXPORT_CLASS(study_plugin::ErrorPlugin, study_plugin::BaseStudyPlugin);

namespace study_plugin
{
  ErrorPlugin::ErrorPlugin() : BaseStudyPlugin("error plugin"){};

  void ErrorPlugin::action()
  {
    ROS_WARN("action : logging error plugin");
  }
} // namespace study_plugin
