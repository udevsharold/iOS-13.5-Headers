/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class MDLSubmesh;

@interface _CUIThemeModelSubmeshRendition : CUIThemeRendition {

	MDLSubmesh* _submesh;

}
-(void)dealloc;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(unsigned long long)writeToData:(id)arg1 ;
-(id)initForArchiving:(id)arg1 ;
-(id)modelSubmesh;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
@end

