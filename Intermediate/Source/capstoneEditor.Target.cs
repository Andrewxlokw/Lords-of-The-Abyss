using UnrealBuildTool;

public class capstoneEditorTarget : TargetRules
{
	public capstoneEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("capstone");
	}
}
