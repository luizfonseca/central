//
//  CEAppDelegate.h
//  Central
//
//  Created by Luiz Fonseca on 3/20/13.
//  Copyright (c) 2013 Luiz Fonseca. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface CEAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
