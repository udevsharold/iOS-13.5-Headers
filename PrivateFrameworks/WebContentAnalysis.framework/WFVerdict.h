/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFLSMResult, NSString;

@interface WFVerdict : NSObject {

	BOOL restricted;
	WFLSMResult* LSMEvaluationResult;
	NSString* message;
	NSString* URL;
	int evidence;

}
+(id)verdictWithRestriction:(BOOL)arg1 URL:(id)arg2 evidence:(int)arg3 LSMEvaluationResult:(id)arg4 message:(id)arg5 ;
-(void)dealloc;
-(id)description;
-(void)setURL:(id)arg1 ;
-(id)URL;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
-(BOOL)restricted;
-(void)setEvidence:(int)arg1 ;
-(void)setLSMEvaluationResult:(id)arg1 ;
-(id)LSMEvaluationResult;
-(int)evidence;
@end

