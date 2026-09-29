#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to ur_llm_planner__srv__ExecuteSkill_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteSkill_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub skill: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub zone: std::string::String,

}



impl Default for ExecuteSkill_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExecuteSkill_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteSkill_Request {
  type RmwMsg = super::srv::rmw::ExecuteSkill_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        skill: msg.skill.as_str().into(),
        object: msg.object.as_str().into(),
        zone: msg.zone.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        skill: msg.skill.as_str().into(),
        object: msg.object.as_str().into(),
        zone: msg.zone.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      skill: msg.skill.to_string(),
      object: msg.object.to_string(),
      zone: msg.zone.to_string(),
    }
  }
}


// Corresponds to ur_llm_planner__srv__ExecuteSkill_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteSkill_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ExecuteSkill_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExecuteSkill_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteSkill_Response {
  type RmwMsg = super::srv::rmw::ExecuteSkill_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status.as_str().into(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status.as_str().into(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status.to_string(),
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "ur_llm_planner__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_llm_planner__srv__ExecuteSkill() -> *const std::ffi::c_void;
}

// Corresponds to ur_llm_planner__srv__ExecuteSkill
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteSkill;

impl rosidl_runtime_rs::Service for ExecuteSkill {
    type Request = ExecuteSkill_Request;
    type Response = ExecuteSkill_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_llm_planner__srv__ExecuteSkill() }
    }
}


