/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSData;

@interface _CUIRawDataRendition : CUIThemeRendition {

	NSData* _dataBytes;

}
-(void)dealloc;
-(id)data;
-(int)pixelFormat;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
@end

