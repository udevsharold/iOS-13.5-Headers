/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMLParserDelegate <NSObject>
@optional
-(id)CAMLParser:(id)arg1 didFailToLoadResourceFromURL:(id)arg2;
-(void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3;
-(id)CAMLParser:(id)arg1 resourceForURL:(id)arg2;
-(void)CAMLParser:(id)arg1 evaluateScriptElement:(id)arg2 sourceURL:(id)arg3 lineNumber:(unsigned)arg4;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
-(void)CAMLParser:(id)arg1 formatErrorString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4;
-(void)CAMLParser:(id)arg1 formatWarningString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4;
-(id)CAMLParser:(id)arg1 evaluateScriptValue:(id)arg2 sourceURL:(id)arg3 lineNumber:(unsigned)arg4;

@end

