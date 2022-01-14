using UnrealBuildTool;
using System.Collections.Generic;

public class FruitPickerServerTarget : TargetRules
{
	public FruitPickerServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "FruitPicker" } );
	}
}