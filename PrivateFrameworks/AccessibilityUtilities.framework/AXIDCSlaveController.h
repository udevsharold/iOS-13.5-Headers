/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXIDCRemoteController.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@class AXDispatchTimer, NSString;

@interface AXIDCSlaveController : AXIDCRemoteController <NSNetServiceDelegate> {

	AXDispatchTimer* _resolveTimer;
	CFSocketRef _ipv4socket;
	CFSocketRef _ipv6socket;
	BOOL _isVisible;
	double _searchTimeout;
	/*^block*/id _searchCompletion;
	NSString* _serviceType;

}

@property (nonatomic,copy) id searchCompletion;                     //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (nonatomic,retain) NSString * serviceType;                //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) double searchTimeout;                  //@synthesize searchTimeout=_searchTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)initialize;
-(NSString *)serviceType;
-(BOOL)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(double)searchTimeout;
-(void)setServiceType:(NSString *)arg1 ;
-(void)receivedData:(id)arg1 ;
-(id)initWithServiceType:(id)arg1 ;
-(void)closeConnectionWithError:(id)arg1 ;
-(void)resolveMasterWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isSlave;
-(void)setSearchTimeout:(double)arg1 ;
-(void)setSearchCompletion:(id)arg1 ;
-(BOOL)shouldAcceptConnection;
-(void)acceptConnection:(int)arg1 ;
-(id)searchCompletion;
-(void)resetConnection;
@end

