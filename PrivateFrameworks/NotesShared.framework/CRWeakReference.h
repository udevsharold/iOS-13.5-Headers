/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSUUID, CRDocument, NSString;

@interface CRWeakReference : NSObject <CRDataType, CRCoding> {

	NSUUID* _identifier;
	CRDocument* _document;

}

@property (assign,nonatomic,__weak) CRDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id contents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSUUID *)identifier;
-(id)contents;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)tombstone;
-(void)setDocument:(CRDocument *)arg1 ;
-(CRDocument *)document;
-(id)initWithContents:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(id)initWithContents:(id)arg1 document:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 document:(id)arg2 ;
@end

