--- lib/dbi/row.rb.orig	2014-10-17 15:50:24.000000000 +0200
+++ lib/dbi/row.rb	2014-10-17 15:54:47.000000000 +0200
@@ -209,7 +209,6 @@
         end
 
 
-        if RUBY_VERSION =~ /^1\.9/
             def __getobj__
                 @arr
             end
@@ -217,28 +216,6 @@
             def __setobj__(obj)
                 @delegate_dc_obj = @arr = obj
             end
-        else
-            #
-            # See Object#clone.
-            #
-            # #clone and #dup here, however, are both deep copies via Marshal.
-            #
-            def clone
-                Marshal.load(Marshal.dump(self))
-            end
-
-            def dup
-                row = self.class.allocate
-                row.instance_variable_set :@column_types,  @column_types
-                row.instance_variable_set :@convert_types, @convert_types
-                row.instance_variable_set :@column_map,    @column_map
-                row.instance_variable_set :@column_names,  @column_names
-                # this is the only one we actually dup...
-                row.instance_variable_set :@arr,           arr = @arr.dup
-                row.instance_variable_set :@_dc_obj,       arr
-                row
-            end
-        end
 
         private
 
