/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDPrivacyPolicy : NSObject {

	BOOL canPersistOnStorage;
	double temporalPrecision;

}

@property (nonatomic,readonly) BOOL canPersistOnStorage; 
@property (nonatomic,readonly) double temporalPrecision; 
+(id)sharedPrivacyPolicy;
-(id)init;
-(id)description;
-(double)temporalPrecision;
-(id)initWithTemporalPrecision:(double)arg1 canPersistOnStorage:(BOOL)arg2 ;
-(BOOL)canPersistOnStorage;
@end

