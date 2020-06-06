/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteUI/TVRCDeviceQueryDelegate.h>
#import <TVRemoteUI/TVRUIDeviceQuery.h>

@protocol TVRUIDeviceSearchDelegate;
@class TVRCDeviceQuery, NSMutableDictionary, NSString;

@interface TVRUICoreDeviceQuery : NSObject <TVRCDeviceQueryDelegate, TVRUIDeviceQuery> {

	BOOL _nearbyDeviceAdded;
	id<TVRUIDeviceSearchDelegate> _delegate;
	TVRCDeviceQuery* _query;
	NSMutableDictionary* _deviceList;

}

@property (assign,nonatomic,__weak) id<TVRUIDeviceSearchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVRCDeviceQuery * query;                                    //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceList;                           //@synthesize deviceList=_deviceList - In the implementation block
@property (assign,nonatomic) BOOL nearbyDeviceAdded;                                     //@synthesize nearbyDeviceAdded=_nearbyDeviceAdded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVRUIDeviceSearchDelegate>)delegate;
-(void)setDelegate:(id<TVRUIDeviceSearchDelegate>)arg1 ;
-(TVRCDeviceQuery *)query;
-(void)stop;
-(void)setQuery:(TVRCDeviceQuery *)arg1 ;
-(BOOL)hasStarted;
-(void)startQuery:(id)arg1 ;
-(NSMutableDictionary *)deviceList;
-(void)setDeviceList:(NSMutableDictionary *)arg1 ;
-(void)deviceQueryDidUpdateDevices:(id)arg1 ;
-(BOOL)nearbyDeviceAdded;
-(void)setNearbyDeviceAdded:(BOOL)arg1 ;
@end

