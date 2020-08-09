/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@interface VTCorruptDetector : NSObject {

	int _zeroSamplesCount;
	int _maxZeroSamplesCount;

}
-(id)init;
-(void)reset;
-(void)analyze:(AudioBuffer*)arg1 ;
-(int)getMaxZeroSampleCount;
-(BOOL)audioHasZeroRun;
@end
