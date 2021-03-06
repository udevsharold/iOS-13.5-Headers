/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTStarkManager.h>

@class CRPairedVehicleManager;

@interface RTStarkManager_CarKit : RTStarkManager {

	BOOL _trustedConnectionEstablished;
	CRPairedVehicleManager* _pairedVehicleManager;

}

@property (assign,nonatomic) BOOL trustedConnectionEstablished;                          //@synthesize trustedConnectionEstablished=_trustedConnectionEstablished - In the implementation block
@property (nonatomic,retain) CRPairedVehicleManager * pairedVehicleManager;              //@synthesize pairedVehicleManager=_pairedVehicleManager - In the implementation block
-(void)_setup;
-(void)setup;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 ;
-(void)onPairedVehiclesDidChange:(id)arg1 ;
-(BOOL)trustedConnectionEstablished;
-(CRPairedVehicleManager *)pairedVehicleManager;
-(void)setTrustedConnectionEstablished:(BOOL)arg1 ;
-(void)_updateTrustedConnectionEstablished;
-(void)_fetchConnectionStateWithHandler:(/*^block*/id)arg1 ;
-(void)setPairedVehicleManager:(CRPairedVehicleManager *)arg1 ;
@end

