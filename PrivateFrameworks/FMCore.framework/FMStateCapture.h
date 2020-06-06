/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMCore/FMCore-Structs.h>
@interface FMStateCapture : NSObject {

	/*^block*/id _stateCaptureBlock;
	unsigned long long _handle;

}

@property (assign,nonatomic) unsigned long long handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) id stateCaptureBlock;                     //@synthesize stateCaptureBlock=_stateCaptureBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)handle;
-(void)setHandle:(unsigned long long)arg1 ;
-(os_state_data_s*)_stateCapture;
-(os_state_data_s*)stateDataForDictionary:(id)arg1 title:(id)arg2 ;
-(void)registerHandlerforStateCapture;
-(void)unregisterHandlerforStateCapture;
-(id)stateCaptureBlock;
-(void)setStateCaptureBlock:(id)arg1 ;
@end

