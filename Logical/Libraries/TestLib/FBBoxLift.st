
(* BoxLift *)
FUNCTION_BLOCK FBBoxLift

	doConvTop := NOT diConvTop OR ConvTopOn;
	doConvBottom := NOT diConvBottom OR ConvBottomOn;
	CASE selectLift OF
		(*-- wait for request*)
		selectLiftWAIT:
			IF (diConvTop = TRUE) THEN
				selectLift := selectLiftTOP_POSITION;
			ELSIF (diConvBottom = TRUE) THEN
				selectLift := selectLiftBOTTOM_POSITION;
			END_IF
			(*-- move lift to top position*)
		selectLiftTOP_POSITION:
			doLiftTop := TRUE;
			IF (diLiftTop = TRUE) THEN
				doLiftTop := FALSE;
				ConvTopOn := TRUE;
				selectLift := selectLiftGETBOX;
			END_IF
		
			(*-- move lift to bottom position*)
		selectLiftBOTTOM_POSITION:
			doLiftBottom := TRUE;
			IF (diLiftBottom = TRUE) THEN
				doLiftBottom := FALSE;
				ConvBottomOn := TRUE;
				selectLift := selectLiftGETBOX;
			END_IF
			(*-- move box to lift*)
		selectLiftGETBOX:
			doConvLift := TRUE;
			IF (diBoxLift = TRUE) THEN
				doConvLift := FALSE;
				ConvTopOn := FALSE;
				ConvBottomOn := FALSE;
				selectLift := selectLiftUNLOAD_POSITION;
			END_IF
			(*-- move lift to unload position*)
		selectLiftUNLOAD_POSITION:
			doLiftUnload := TRUE;
			IF (diLiftUnload = TRUE) THEN
				doLiftUnload := FALSE;
				selectLift := selectLiftUNLOAD_BOX;
			END_IF
			(*-- unload the box*)
		selectLiftUNLOAD_BOX:
			doConvLift := TRUE;
			IF (diBoxLift = FALSE) THEN
				doConvLift := FALSE;
				selectLift := selectLiftWAIT;
			END_IF
	END_CASE		
END_FUNCTION_BLOCK
