/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPDashboardClientInterface.h>

@protocol CPDashboardProviding;
@class NSArray, NSXPCConnection, NSString;

@interface CPDashboardController : NSObject <CPDashboardClientInterface> {

	NSArray* _shortcutButtons;
	NSXPCConnection* _connection;
	id<CPDashboardProviding> _dashboardProvider;

}

@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<CPDashboardProviding> dashboardProvider;              //@synthesize dashboardProvider=_dashboardProvider - In the implementation block
@property (nonatomic,copy) NSArray * shortcutButtons;                                 //@synthesize shortcutButtons=_shortcutButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dashboardProvidingInterface;
+(id)_dashboardClientInterface;
-(void)_invalidate;
-(id)_init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_connectionInvalidated;
-(void)_connectionInterrupted;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(void)_sceneConnect:(id)arg1 ;
-(void)_connectToListenerEndpoint:(id)arg1 ;
-(id<CPDashboardProviding>)dashboardProvider;
-(void)setDashboardProvider:(id<CPDashboardProviding>)arg1 ;
-(NSArray *)shortcutButtons;
-(void)setShortcutButtons:(NSArray *)arg1 ;
@end

