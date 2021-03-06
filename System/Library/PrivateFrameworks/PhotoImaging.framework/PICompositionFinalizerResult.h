/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NUComposition;

@interface PICompositionFinalizerResult : NSObject {

	long long _disposition;
	NUComposition* _composition;

}

@property (readonly) long long disposition;                         //@synthesize disposition=_disposition - In the implementation block
@property (copy,readonly) NUComposition * composition;              //@synthesize composition=_composition - In the implementation block
-(long long)disposition;
-(NUComposition *)composition;
-(id)initWithDisposition:(long long)arg1 composition:(id)arg2 ;
@end

