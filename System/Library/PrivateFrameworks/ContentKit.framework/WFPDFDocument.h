/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContentKit/ContentKit-Structs.h>
@class NSArray;

@interface WFPDFDocument : NSObject {

	BOOL _encrypted;
	BOOL _locked;
	BOOL _allowsPrinting;
	BOOL _allowsCopying;
	CGPDFDocumentRef _documentRef;
	NSArray* _pages;

}

@property (nonatomic,retain) NSArray * pages;                                     //@synthesize pages=_pages - In the implementation block
@property (nonatomic,readonly) CGPDFDocumentRef documentRef;                      //@synthesize documentRef=_documentRef - In the implementation block
@property (nonatomic,readonly) int majorVersion; 
@property (nonatomic,readonly) int minorVersion; 
@property (assign,getter=isEncrypted,nonatomic) BOOL encrypted;                   //@synthesize encrypted=_encrypted - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;                         //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) BOOL allowsPrinting;                                 //@synthesize allowsPrinting=_allowsPrinting - In the implementation block
@property (assign,nonatomic) BOOL allowsCopying;                                  //@synthesize allowsCopying=_allowsCopying - In the implementation block
@property (nonatomic,readonly) unsigned long long expectedPageCount; 
@property (nonatomic,readonly) Class pageClass; 
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(BOOL)isLocked;
-(BOOL)isEncrypted;
-(void)setEncrypted:(BOOL)arg1 ;
-(int)majorVersion;
-(int)minorVersion;
-(NSArray *)pages;
-(CGPDFDocumentRef)documentRef;
-(BOOL)unlockWithPassword:(id)arg1 ;
-(BOOL)allowsPrinting;
-(BOOL)allowsCopying;
-(Class)pageClass;
-(void)setPages:(NSArray *)arg1 ;
-(id)initWithDocumentRef:(CGPDFDocumentRef)arg1 ;
-(unsigned long long)expectedPageCount;
-(void)setAllowsPrinting:(BOOL)arg1 ;
-(void)setAllowsCopying:(BOOL)arg1 ;
@end
