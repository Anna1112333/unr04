// Netology

using UnrealBuildTool;
using System.Collections.Generic;

public class L_4EditorTarget : TargetRules
{
	public L_4EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "L_4" } );
	}
}
