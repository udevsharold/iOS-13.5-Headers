/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_path_flow;
@class NSObject, NWInterface, NWEndpoint, NSUUID;

@interface NWPathFlow : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_path_flow> _internalPathFlow;

}

@property (readonly) NSObject*<OS_nw_path_flow> internalPathFlow;              //@synthesize internalPathFlow=_internalPathFlow - In the implementation block
@property (nonatomic,readonly) NWInterface * interface; 
@property (nonatomic,readonly) NWEndpoint * localEndpoint; 
@property (nonatomic,readonly) NWEndpoint * remoteEndpoint; 
@property (nonatomic,readonly) NSUUID * flowID; 
@property (nonatomic,readonly) NSUUID * nexusAgent; 
@property (nonatomic,readonly) NSUUID * nexusInstance; 
@property (nonatomic,readonly) unsigned nexusPort; 
@property (getter=isViable,nonatomic,readonly) BOOL viable; 
@property (getter=isAssigned,nonatomic,readonly) BOOL assigned; 
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
@property (getter=isDirect,nonatomic,readonly) BOOL direct; 
@property (getter=isDefunct,nonatomic,readonly) BOOL defunct; 
@property (nonatomic,readonly) BOOL supportsIPv4; 
@property (nonatomic,readonly) BOOL supportsIPv6; 
-(id)description;
-(NWInterface *)interface;
-(NWEndpoint *)localEndpoint;
-(NWEndpoint *)remoteEndpoint;
-(BOOL)isLocal;
-(BOOL)isDirect;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)privateDescription;
-(BOOL)isViable;
-(BOOL)supportsIPv4;
-(BOOL)supportsIPv6;
-(id)initWithPathFlow:(id)arg1 ;
-(NSUUID *)flowID;
-(NSUUID *)nexusAgent;
-(NSUUID *)nexusInstance;
-(unsigned)nexusPort;
-(BOOL)isAssigned;
-(BOOL)isDefunct;
-(NSObject*<OS_nw_path_flow>)internalPathFlow;
@end
