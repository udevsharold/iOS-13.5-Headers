/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPKeychainCircleProxy, CDPSecureChannelProxy, CDPDCircleProxy;
@class CDPContext;

@interface CDPDSecureChannelContext : NSObject {

	CDPContext* _context;
	id<CDPKeychainCircleProxy> _keychainCircleProxy;
	id<CDPSecureChannelProxy> _secureChannelProxy;
	id<CDPDCircleProxy> _circleProxy;

}

@property (nonatomic,retain) id<CDPKeychainCircleProxy> keychainCircleProxy;              //@synthesize keychainCircleProxy=_keychainCircleProxy - In the implementation block
@property (nonatomic,retain) id<CDPSecureChannelProxy> secureChannelProxy;                //@synthesize secureChannelProxy=_secureChannelProxy - In the implementation block
@property (nonatomic,retain) id<CDPDCircleProxy> circleProxy;                             //@synthesize circleProxy=_circleProxy - In the implementation block
-(void)dealloc;
-(id<CDPDCircleProxy>)circleProxy;
-(void)setCircleProxy:(id<CDPDCircleProxy>)arg1 ;
-(BOOL)initialize:(id*)arg1 ;
-(id)initWithContext:(id)arg1 circleProxy:(id)arg2 ;
-(id)initWithChannel:(id)arg1 dataProvider:(id)arg2 circleProxy:(id)arg3 ;
-(id<CDPKeychainCircleProxy>)keychainCircleProxy;
-(void)setKeychainCircleProxy:(id<CDPKeychainCircleProxy>)arg1 ;
-(id<CDPSecureChannelProxy>)secureChannelProxy;
-(void)setSecureChannelProxy:(id<CDPSecureChannelProxy>)arg1 ;
@end

