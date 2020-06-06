/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NBPhoneMetaDataGenerator : NSObject
-(id)init;
-(id)parseJSON:(id)arg1 ;
-(id)generateMetaData;
-(void)generateMetadataClasses;
-(void)createClassWithDictionary:(id)arg1 name:(id)arg2 isTestData:(BOOL)arg3 ;
-(id)mappingObject:(id)arg1 ;
-(id)genRandStringLength:(int)arg1 ;
-(id)indentTab:(int)arg1 ;
-(id)getSRCDirectoryPath;
-(id)documentsDirectory;
-(id)generateMetaDataWithTest;
-(id)generateSourceCodeWith:(id)arg1 name:(id)arg2 type:(int)arg3 isTestData:(BOOL)arg4 ;
-(id)generateMappingSourceCodeWith:(id)arg1 name:(id)arg2 type:(int)arg3 isTestData:(BOOL)arg4 ;
-(id)stringForSourceCode:(id)arg1 ;
-(id)numberForSourceCode:(id)arg1 ;
-(id)phoneNumberDescWithData:(id)arg1 name:(id)arg2 ;
-(id)phoneNumberDescWithData:(id)arg1 ;
-(id)phoneNumberFormatWithData:(id)arg1 name:(id)arg2 ;
-(id)phoneNumberFormatArrayWithData:(id)arg1 name:(id)arg2 ;
@end

