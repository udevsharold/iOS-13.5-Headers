/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface VCPBVoiceShortcut : PBCodable <NSCopying> {

	double _dateCreated;
	double _dateLastModified;
	NSString* _associatedAppBundleIdentifier;
	NSString* _identifier;
	NSData* _keyImageData;
	NSString* _phrase;
	NSData* _serializedWorkflowData;
	NSString* _shortcutDescription;
	NSString* _shortcutName;

}

@property (nonatomic,retain) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * phrase;                                     //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,retain) NSString * shortcutName;                               //@synthesize shortcutName=_shortcutName - In the implementation block
@property (nonatomic,readonly) BOOL hasShortcutDescription; 
@property (nonatomic,retain) NSString * shortcutDescription;                        //@synthesize shortcutDescription=_shortcutDescription - In the implementation block
@property (nonatomic,retain) NSString * associatedAppBundleIdentifier;              //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (assign,nonatomic) double dateCreated;                                    //@synthesize dateCreated=_dateCreated - In the implementation block
@property (assign,nonatomic) double dateLastModified;                               //@synthesize dateLastModified=_dateLastModified - In the implementation block
@property (nonatomic,retain) NSData * serializedWorkflowData;                       //@synthesize serializedWorkflowData=_serializedWorkflowData - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyImageData; 
@property (nonatomic,retain) NSData * keyImageData;                                 //@synthesize keyImageData=_keyImageData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)dateCreated;
-(NSString *)shortcutName;
-(NSString *)associatedAppBundleIdentifier;
-(void)setShortcutName:(NSString *)arg1 ;
-(NSString *)phrase;
-(void)setPhrase:(NSString *)arg1 ;
-(void)setAssociatedAppBundleIdentifier:(NSString *)arg1 ;
-(void)setDateCreated:(double)arg1 ;
-(double)dateLastModified;
-(void)setDateLastModified:(double)arg1 ;
-(NSString *)shortcutDescription;
-(NSData *)serializedWorkflowData;
-(NSData *)keyImageData;
-(void)setSerializedWorkflowData:(NSData *)arg1 ;
-(void)setShortcutDescription:(NSString *)arg1 ;
-(BOOL)hasShortcutDescription;
-(BOOL)hasKeyImageData;
-(void)setKeyImageData:(NSData *)arg1 ;
@end

