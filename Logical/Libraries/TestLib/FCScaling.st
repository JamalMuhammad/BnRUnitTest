(* Scaling Function *)
FUNCTION FCScaling
	FCScaling := REAL_TO_INT((INT_TO_REAL(PV) * outMAX/ INT_TO_REAL(inMAX))) ;	
END_FUNCTION
