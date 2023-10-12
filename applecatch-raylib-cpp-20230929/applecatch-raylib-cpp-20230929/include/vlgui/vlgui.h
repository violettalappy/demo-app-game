#pragma once

namespace vlgui {
	enum KFlag {
		K_EnableDocking,
		K_EnableResizable,
		K_ResizableBasedOnWindow,
		K_EnableClick,
	};
	
	/// <summary>
	/// Save as JSON and XML
	/// Near the same as GLADE GUI
	/// </summary>
	class Config {
	public:
		void Save();
		void Load();
	};

	//Manage how vlgui work
	class vlgui {
	public:
		//header
	public:
		void Begin();
		void End();
	public:
		void SetFont(int arg_fontPath);
		void PushFont(int arg_fontPath);
		void PopFont(int arg_fontPath);	
	public:
		//--Text--
		bool Text(int arg_label) {
			return false;
		}
		//Follow IBM calculation of size
		void SetTextSize(int value){ }
	public:
		//--Button--
		bool Button(int arg_label) {
			return false;
		}
	public:
		//--CheckBox--
		bool CheckBox(int arg_label) {
			return false;
		}
	public:
		//--Dropdown--
		bool BeginDropdown() {
			return false;
		}
		void Dropdown();
		bool EndDropdown() {
			return false;
		}
	public:
		//--ComboBox--
		bool BeginComboBox() {
			return false;
		}
		bool ComboBox(int arg_label) {
			return false;
		}
		void EndComboBox();
	public:
		//--SliderFloat--
		bool SliderFloat(float arg_min = 0.0f, float arg_max = 0.0f) {
			return false;
		}		
		void SetSliderFloatValueRange();	
	};		
	
	class Image{ };
	class ComboBox{ };
	class VerticalLayout{ };
	class HorizontalLayout{ };
	class Color4{ };	
}
