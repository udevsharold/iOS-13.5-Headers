/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMCatherineFeederInternal;

@interface CMCatherineFeeder : NSObject {

	CMCatherineFeederInternal* _internal;

}

@property (nonatomic,readonly) CMCatherineFeederInternal * internal;              //@synthesize internal=_internal - In the implementation block
-(id)init;
-(void)dealloc;
-(CMCatherineFeederInternal *)internal;
-(void)feedCatherine:(double)arg1 confidence:(double)arg2 ;
@end

