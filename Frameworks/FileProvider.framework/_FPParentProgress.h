/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class FPProgressProxy;

@interface _FPParentProgress : NSProgress {

	FPProgressProxy* _progressProxy;

}

@property (readonly) FPProgressProxy * progressProxy;              //@synthesize progressProxy=_progressProxy - In the implementation block
-(void)setProgressProxy:(FPProgressProxy *)arg1 ;
-(FPProgressProxy *)progressProxy;
@end

