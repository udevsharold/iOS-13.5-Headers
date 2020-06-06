/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMMachineReadableCodeLoggingController : NSObject {

	BOOL __seenMachineReadableObjectOfAcceptableSize;
	BOOL __seenMachineReadableObjectOfUnacceptableSize;
	BOOL __seenMachineReadableObjectInNonActiveState;

}

@property (assign,setter=_setSeenMachineReadableObjectOfAcceptableSize:,nonatomic) BOOL _seenMachineReadableObjectOfAcceptableSize;                  //@synthesize _seenMachineReadableObjectOfAcceptableSize=__seenMachineReadableObjectOfAcceptableSize - In the implementation block
@property (assign,setter=_setSeenMachineReadableObjectOfUnacceptableSize:,nonatomic) BOOL _seenMachineReadableObjectOfUnacceptableSize;              //@synthesize _seenMachineReadableObjectOfUnacceptableSize=__seenMachineReadableObjectOfUnacceptableSize - In the implementation block
@property (assign,setter=_setSeenMachineReadableObjectInNonActiveState:,nonatomic) BOOL _seenMachineReadableObjectInNonActiveState;                  //@synthesize _seenMachineReadableObjectInNonActiveState=__seenMachineReadableObjectInNonActiveState - In the implementation block
-(id)init;
-(void)resetLoggingState;
-(void)logMachineReadableCodeResultDuringInactiveAppState;
-(void)logMachineReadableCodeResult:(id)arg1 isOfSignificantSize:(BOOL)arg2 ;
-(BOOL)_seenMachineReadableObjectInNonActiveState;
-(void)_setSeenMachineReadableObjectInNonActiveState:(BOOL)arg1 ;
-(BOOL)_seenMachineReadableObjectOfAcceptableSize;
-(BOOL)_seenMachineReadableObjectOfUnacceptableSize;
-(void)_setSeenMachineReadableObjectOfAcceptableSize:(BOOL)arg1 ;
-(void)_setSeenMachineReadableObjectOfUnacceptableSize:(BOOL)arg1 ;
@end

