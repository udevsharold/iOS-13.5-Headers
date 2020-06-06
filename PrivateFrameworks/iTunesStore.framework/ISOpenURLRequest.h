/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface ISOpenURLRequest : NSObject <NSCopying> {

	BOOL _isITunesStoreURL;
	NSString* _targetIdentifier;
	NSString* _urlBagKey;
	NSURL* _url;
	BOOL _interruptsKeybagRefresh;

}

@property (nonatomic,retain) NSURL * URL;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * URLBagKey;                                       //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (assign,nonatomic) BOOL interruptsKeybagRefresh;                             //@synthesize interruptsKeybagRefresh=_interruptsKeybagRefresh - In the implementation block
@property (assign,getter=isITunesStoreURL,nonatomic) BOOL ITunesStoreURL;              //@synthesize isITunesStoreURL=_isITunesStoreURL - In the implementation block
@property (nonatomic,copy) NSString * targetIdentifier;                                //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
+(id)openURLRequestWithURL:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setURLBagKey:(NSString *)arg1 ;
-(NSString *)URLBagKey;
-(NSString *)targetIdentifier;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(id)initWithURLBagKey:(id)arg1 ;
-(void)setITunesStoreURL:(BOOL)arg1 ;
-(void)setInterruptsKeybagRefresh:(BOOL)arg1 ;
-(BOOL)isITunesStoreURL;
-(BOOL)interruptsKeybagRefresh;
@end

