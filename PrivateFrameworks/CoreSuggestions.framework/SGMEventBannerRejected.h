/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMEventBannerRejected : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(PETScalarEventTracker *)tracker;
-(void)trackEventWithScalar:(unsigned long long)arg1 app:(SGMBannerDisplayApp_)arg2 category:(SGMEventCategory_)arg3 extracted:(SGMEventExtractionType_)arg4 ;
@end

