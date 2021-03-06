/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ICIAMApplicationMessageSyncResponse : PBCodable <NSCopying> {

	NSString* _bundleID;
	NSMutableArray* _syncCommands;

}

@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSMutableArray * syncCommands;              //@synthesize syncCommands=_syncCommands - In the implementation block
+(Class)syncCommandsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleID;
-(unsigned long long)syncCommandsCount;
-(id)syncCommandsAtIndex:(unsigned long long)arg1 ;
-(void)addSyncCommands:(id)arg1 ;
-(void)clearSyncCommands;
-(NSMutableArray *)syncCommands;
-(void)setSyncCommands:(NSMutableArray *)arg1 ;
@end

