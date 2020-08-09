/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, TUIKBGraphSerialization;

@interface TUIKeyboardLayoutFactory : NSObject {

	void* _layoutsLibraryHandle;
	NSMutableDictionary* _internalCache;
	TUIKBGraphSerialization* _decoder;

}

@property (nonatomic,readonly) void* layoutsLibraryHandle;              //@synthesize layoutsLibraryHandle=_layoutsLibraryHandle - In the implementation block
@property (retain) NSMutableDictionary * internalCache;                 //@synthesize internalCache=_internalCache - In the implementation block
@property (retain) TUIKBGraphSerialization * decoder;                   //@synthesize decoder=_decoder - In the implementation block
+(id)sharedKeyboardFactory;
+(id)layoutsFileName;
-(id)init;
-(void)dealloc;
-(id)keyboardPrefixForWidth:(double)arg1 andEdge:(BOOL)arg2 ;
-(id)keyboardWithName:(id)arg1 inCache:(id)arg2 ;
-(TUIKBGraphSerialization *)decoder;
-(void*)layoutsLibraryHandle;
-(NSMutableDictionary *)internalCache;
-(void)setInternalCache:(NSMutableDictionary *)arg1 ;
-(void)setDecoder:(TUIKBGraphSerialization *)arg1 ;
-(void)_createDecoderIfNecessary;
@end
