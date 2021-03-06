/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXLayoutOptions;

@interface SXLayoutParameters : NSObject {

	SXLayoutOptions* _layoutOptions;
	unsigned long long _layoutType;
	double _expectedDuration;

}

@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutType;                //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) double expectedDuration;                      //@synthesize expectedDuration=_expectedDuration - In the implementation block
-(id)description;
-(SXLayoutOptions *)layoutOptions;
-(double)expectedDuration;
-(unsigned long long)layoutType;
-(id)initWithLayoutOptions:(id)arg1 layoutType:(unsigned long long)arg2 expectedDuration:(double)arg3 ;
@end

