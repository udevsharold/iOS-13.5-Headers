/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_channel;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSObject, NSMutableDictionary;

@interface NENexusFlowManager : NSObject {

	NSObject*<OS_nw_channel> _kernelChannel;
	nw_protocol* _protocol;
	nw_protocol* _defaultInputProtocol;
	NSMutableDictionary* _userChannels;

}

@property (assign) nw_protocol* protocol;                               //@synthesize protocol=_protocol - In the implementation block
@property (assign) nw_protocol* defaultInputProtocol;                   //@synthesize defaultInputProtocol=_defaultInputProtocol - In the implementation block
@property (retain) NSMutableDictionary * userChannels;                  //@synthesize userChannels=_userChannels - In the implementation block
@property (retain) NSObject*<OS_nw_channel> kernelChannel;              //@synthesize kernelChannel=_kernelChannel - In the implementation block
-(void)dealloc;
-(nw_protocol*)protocol;
-(void)setProtocol:(nw_protocol*)arg1 ;
-(void)setKernelChannel:(NSObject*<OS_nw_channel>)arg1 ;
-(NSObject*<OS_nw_channel>)kernelChannel;
-(nw_protocol*)defaultInputProtocol;
-(void)setDefaultInputProtocol:(nw_protocol*)arg1 ;
-(NSMutableDictionary *)userChannels;
-(void)setUserChannels:(NSMutableDictionary *)arg1 ;
@end

